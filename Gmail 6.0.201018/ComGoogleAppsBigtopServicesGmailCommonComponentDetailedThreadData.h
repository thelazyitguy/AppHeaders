//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesGmailBigTopGmailThread, ComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageList, ComGoogleAppsBigtopServicesGmailCommonComponentSummaryThreadData;

@interface ComGoogleAppsBigtopServicesGmailCommonComponentDetailedThreadData : NSObject
{
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryThreadData *summaryThreadData_;
    ComGoogleAppsBigtopServicesGmailBigTopGmailThread *originalThreadProto_;
    ComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageList *visibleMessages_;
    ComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageList *allMessages_;
}

- (void)dealloc;
- (id)getSummary;
- (id)getVisibleAndInvisibleMessages;
- (id)getVisibleMessages;
- (id)getFullThreadProto;

@end
