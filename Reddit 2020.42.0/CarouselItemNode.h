//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "VisibilityTrackable-Protocol.h"

@class ASDisplayNode, CarouselItem, NSObject, NSString;
@protocol CarouselItemNodeDelegate, ViewContext;

@interface CarouselItemNode : BaseFeedDisplayNode <VisibilityTrackable>
{
    id <ViewContext> _viewContext;
    CarouselItem *_carouselItem;
    NSObject<CarouselItemNodeDelegate> *_delegate;
    ASDisplayNode *_uiKitNode;
}

+ (struct CGSize)calculatedCarouselItemSize:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ASDisplayNode *uiKitNode; // @synthesize uiKitNode=_uiKitNode;
@property(nonatomic) __weak NSObject<CarouselItemNodeDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CarouselItem *carouselItem; // @synthesize carouselItem=_carouselItem;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
- (void)didExitVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didExitFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didExitVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleStateWithVisibilityContext:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didEndDisplaying;
- (void)willBeginDisplaying;
- (void)didLoad;
- (id)initWithCarouselItem:(id)arg1 viewContext:(id)arg2;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 viewContext:(id)arg2 withCarouselItem:(id)arg3 carousel:(id)arg4;
- (id)initWithViewContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

