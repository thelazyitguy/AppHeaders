//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSError, YCHLiveChatDataSource, YTICommand, YTILiveChatActionPanelSupportedRenderers, YTILiveChatHeaderRenderer, YTILiveChatRenderer;

@protocol YCHLiveChatDataSourceDelegate <NSObject>
- (void)dataSourceDidFinishInitialLoad:(YCHLiveChatDataSource *)arg1 error:(NSError *)arg2 liveChatRenderer:(YTILiveChatRenderer *)arg3 fromResponse:(id)arg4;
- (void)dataSource:(YCHLiveChatDataSource *)arg1 shouldUpdateActionPanel:(YTILiveChatActionPanelSupportedRenderers *)arg2;
- (void)dataSource:(YCHLiveChatDataSource *)arg1 shouldApplyUpdateItems:(NSArray *)arg2;

@optional
- (void)dataSource:(YCHLiveChatDataSource *)arg1 didReceiveTooltip:(YTICommand *)arg2;
- (void)dataSource:(YCHLiveChatDataSource *)arg1 didReceiveLiveChatRenderer:(YTILiveChatRenderer *)arg2;
- (void)didCompleteSeekWithDataSource:(YCHLiveChatDataSource *)arg1;
- (void)willStartSeekRequestWithDataSource:(YCHLiveChatDataSource *)arg1;
- (void)dataSource:(YCHLiveChatDataSource *)arg1 shouldUpdateHeader:(YTILiveChatHeaderRenderer *)arg2;
@end

