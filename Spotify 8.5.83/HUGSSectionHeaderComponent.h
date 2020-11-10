//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet;
@protocol HUGSStyleOverrider;

@interface HUGSSectionHeaderComponent : HUGSThemableComponent <HUBComponent>
{
    id <HUGSStyleOverrider> _styleOverrider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
- (id)subtitleFromModel:(id)arg1;
- (_Bool)containsSubtitleForModel:(id)arg1;
- (id)styleForComponentModel:(id)arg1;
- (void)configureHeaderView:(id)arg1 withModel:(id)arg2;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2;

@end

