//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YCHLiveChatPollsActionPanelViewController;

@interface YCHLiveChatCardViewFactory : NSObject
{
    GIMMe *_gimme;
    YCHLiveChatPollsActionPanelViewController *_actionPanelViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YCHLiveChatPollsActionPanelViewController *actionPanelViewController; // @synthesize actionPanelViewController=_actionPanelViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)cardRendererForEntry:(id)arg1;
- (id)cardViewForRenderer:(id)arg1 parentResponder:(id)arg2;
- (void)updatePollsActionPanelViewControllerWithEntry:(id)arg1;
- (id)cardContentThumbnailImageView:(id)arg1;
- (id)cardViewForEntry:(id)arg1 mode:(unsigned long long)arg2 location:(unsigned long long)arg3 parentResponder:(id)arg4;

@end

