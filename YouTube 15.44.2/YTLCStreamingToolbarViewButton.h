//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/QTMButton.h>

#import <Module_Framework/YTLCQuickActionButtonDelegate-Protocol.h>

@class NSString, YTIMobileStreamMenuItemRenderer, YTIMobileStreamTrayItemRenderer;

@interface YTLCStreamingToolbarViewButton : QTMButton <YTLCQuickActionButtonDelegate>
{
    YTIMobileStreamTrayItemRenderer *_itemRenderer;
    YTIMobileStreamMenuItemRenderer *_selectedMenuItemRenderer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTIMobileStreamMenuItemRenderer *selectedMenuItemRenderer; // @synthesize selectedMenuItemRenderer=_selectedMenuItemRenderer;
@property(retain, nonatomic) YTIMobileStreamTrayItemRenderer *itemRenderer; // @synthesize itemRenderer=_itemRenderer;
- (void)actionDidOccur:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

