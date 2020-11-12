//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKAddPassesViewControllerDelegate-Protocol.h"
#import "PopupViewControllerDelegate-Protocol.h"

@class GBTAttachmentCacheMetadata, GBTNetworkFileCache, NSString;
@protocol GBTAttachmentPreviewerDelegate, GBTAttachmentPreviewerServiceDeps, GBTClient;

@interface GBTPassbookController : NSObject <PKAddPassesViewControllerDelegate, PopupViewControllerDelegate>
{
    id <GBTAttachmentPreviewerServiceDeps> _serviceDeps;
    id <GBTClient> _client;
    _Bool _dismissPassbookPending;
    GBTNetworkFileCache *_fileCache;
    GBTPassbookController *_internalRetention;
    GBTAttachmentCacheMetadata *_loadingPassbookMetadata;
    id <GBTAttachmentPreviewerDelegate> _previewerDelegate;
}

- (void).cxx_destruct;
- (void)popupViewControllerDidFinish:(id)arg1;
- (void)popupViewControllerDidCancel:(id)arg1;
- (void)hideSpinnerAndDisplayPassbook:(id)arg1 error:(id)arg2;
- (void)showSpinner;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (_Bool)shouldDelayDisplayingWithLoadingDuration:(double)arg1;
- (void)notifyDelegateWillClose;
- (void)notifyDelegateWillOpen;
- (void)displayPassbookViewerWithPass:(id)arg1 error:(id)arg2;
- (void)showPreviewerForAttachment:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fileCache:(id)arg2 serviceDeps:(id)arg3 client:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
