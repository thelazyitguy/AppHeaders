//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol GDKUploadLiveListDelegate, GDKUploadService;

@interface GDKUploadLiveList : NSObject
{
    NSMutableArray *_uploads;
    NSMutableArray *_folderIdentifiers;
    unsigned long long _sectionIndex;
    id <GDKUploadService> _uploadService;
    id <GDKUploadLiveListDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GDKUploadLiveListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GDKUploadService> uploadService; // @synthesize uploadService=_uploadService;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) NSMutableArray *folderIdentifiers; // @synthesize folderIdentifiers=_folderIdentifiers;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
- (id)files;
- (void)uploadQueueWillReset:(id)arg1;
- (void)uploadFinished:(id)arg1;
- (void)uploadChanged:(id)arg1;
- (void)uploadsQueued:(id)arg1;
- (void)subscribeToNotificationsFromSender:(id)arg1;
- (void)subscribeToNotification:(id)arg1 selector:(SEL)arg2 fromSender:(id)arg3;
- (id)initialDeltas;
- (void)addFolderID:(id)arg1;
- (id)initWithFolderID:(id)arg1 sectionIndex:(unsigned long long)arg2 uploadService:(id)arg3 delegate:(id)arg4;

@end

