//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner_RunWithMailConnection-Protocol.h"

@class ComGoogleAppsBigtopDataImapChangesImapModifyLabelsCommandHandler, ComGoogleAppsBigtopDataImapChangesImapModifyLabelsCommandHandler_FlagsToAddAndRemove, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsBigtopDataImapChangesImapModifyLabelsCommandHandler_$Lambda$7 : NSObject <ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner_RunWithMailConnection>
{
    ComGoogleAppsBigtopDataImapChangesImapModifyLabelsCommandHandler *this$0_;
    NSString *val$folderName_;
    ComGoogleCommonCollectImmutableList *val$messageUidsInFolder_;
    ComGoogleAppsBigtopDataImapChangesImapModifyLabelsCommandHandler_FlagsToAddAndRemove *val$flagsToAddAndRemove_;
    ComGoogleCommonBaseOptional *val$resolvedDestinationFolder_;
}

- (void)dealloc;
- (id)runWithComGoogleAppsBigtopDataMailconnectionMailConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
