//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapImapProto_ImapFolder;
@protocol JavaUtilMap;

@interface ComGoogleAppsBigtopDataImapSyncImapFolderResolver_FolderLookupHelper : NSObject
{
    id <JavaUtilMap> foldersByName_;
    id <JavaUtilMap> foldersByType_;
    ComGoogleAppsBigtopDataImapImapProto_ImapFolder *inbox_;
}

- (void)dealloc;
- (id)getInbox;
- (id)getByTypeWithComGoogleAppsBigtopDataImapImapProto_ImapFolder_FolderType:(id)arg1;
- (id)getByNameWithNSString:(id)arg1;

@end
