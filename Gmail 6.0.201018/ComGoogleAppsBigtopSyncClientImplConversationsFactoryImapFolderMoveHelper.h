//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData, NSString;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplConversationsFactoryImapFolderMoveHelper : NSObject
{
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData *itemData_;
    id <JBTId> threadId_;
    NSString *primaryAccountName_;
}

- (void)dealloc;
- (void)addMoveToClusterChangeIntentsToTransactionWithNSString:(id)arg1 withComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction:(id)arg2;

@end
