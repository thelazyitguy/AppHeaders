//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataImapSyncImapFolderResolver_RunWithResolvedFolders-Protocol.h"

@class ComGoogleAppsBigtopDataImapSearchImapSearch, ComGoogleAppsBigtopDataImapSearchImapSearchRequest, ComGoogleAppsBigtopDataImapSyncImapFolderResolver_FolderKey, NSString;

@interface ComGoogleAppsBigtopDataImapSearchImapSearch_$Lambda$1 : NSObject <ComGoogleAppsBigtopDataImapSyncImapFolderResolver_RunWithResolvedFolders>
{
    ComGoogleAppsBigtopDataImapSearchImapSearch *this$0_;
    ComGoogleAppsBigtopDataImapSyncImapFolderResolver_FolderKey *val$inboxFolderKey_;
    ComGoogleAppsBigtopDataImapSearchImapSearchRequest *val$searchRequest_;
}

- (void)dealloc;
- (id)runWithComGoogleCommonCollectImmutableMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

