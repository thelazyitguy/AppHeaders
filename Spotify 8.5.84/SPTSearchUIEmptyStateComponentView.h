//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUEEmptyStateView;
@protocol HUBComponentEventHandler;

@interface SPTSearchUIEmptyStateComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUEEmptyStateView *_emptyStateView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) GLUEEmptyStateView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)applyThemeLayout;
- (void)applyStyleWithName:(id)arg1;
- (id)styleNameFromModel:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

