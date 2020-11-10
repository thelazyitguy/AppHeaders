//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"
#import "SPTHomeUICarouselChildSizingDelegate-Protocol.h"

@class NSSet, NSString, SPTHomeUIComponentDependencies;
@protocol HUBComponentChildDelegate;

@interface SPTHomeUICarouselComponent : HUGSThemableComponent <SPTHomeUICarouselChildSizingDelegate, HUBComponent, HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> _childDelegate;
    SPTHomeUIComponentDependencies *_dependencies;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUIComponentDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (struct CGSize)sizeForChildAtIndex:(unsigned long long)arg1 inModel:(id)arg2 containerSize:(struct CGSize)arg3;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

