//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataImapChangesImapCommandHandlerResult_ImapAffectedFolder.h"

@class ComGoogleAppsBigtopDataImapImapProto_ImapFolder, ComGoogleCommonCollectImmutableList;

@interface ComGoogleAppsBigtopDataImapChangesAutoValue_ImapCommandHandlerResult_ImapAffectedFolder : ComGoogleAppsBigtopDataImapChangesImapCommandHandlerResult_ImapAffectedFolder
{
    ComGoogleAppsBigtopDataImapImapProto_ImapFolder *folder_;
    ComGoogleCommonCollectImmutableList *affectedExistingUids_;
    ComGoogleCommonCollectImmutableList *fingerprintsOfNewlyCreatedMessages_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getFingerprintsOfNewlyCreatedMessages;
- (id)getAffectedExistingUids;
- (id)getFolder;

@end
