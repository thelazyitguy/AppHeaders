//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTXFutures_AsyncTransform2-Protocol.h"

@class ComGoogleAppsBigtopDataImapImapProto_ImapFolder, ComGoogleAppsBigtopDataImapSyncImapFolderSynchronizer, NSString;
@protocol ComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection;

@interface ComGoogleAppsBigtopDataImapSyncImapFolderSynchronizer_$Lambda$3 : NSObject <XPTXFutures_AsyncTransform2>
{
    ComGoogleAppsBigtopDataImapSyncImapFolderSynchronizer *this$0_;
    int val$numMessagesToSync_;
    id <ComGoogleAppsBigtopDataImapConnectionApiPersonalizedImapConnection> val$connection_;
    ComGoogleAppsBigtopDataImapImapProto_ImapFolder *val$folder_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

