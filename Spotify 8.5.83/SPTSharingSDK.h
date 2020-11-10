//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTSharingSDKImageDownloader, SPTSharingSDKLinkGenerator, SPTSharingSDKShareableServiceImpl;
@protocol SPTSharingSDKDeeplinkHandler, SPTSharingSDKNetworkService, SPTSharingSDKPasteboardWrapper, SPTSharingSDKShareDialogPresenterRegistry, SPTSharingSDKShareHandler;

@interface SPTSharingSDK : NSObject
{
    SPTSharingSDKImageDownloader *_imageDownloader;
    SPTSharingSDKLinkGenerator *_linkGenerator;
    id <SPTSharingSDKPasteboardWrapper> _pasteboardWrapper;
    NSArray *_allShareDestinations;
    id <SPTSharingSDKDeeplinkHandler> _deeplinkHandler;
    id <SPTSharingSDKNetworkService> _networkService;
    id <SPTSharingSDKShareHandler> _shareHandler;
    id <SPTSharingSDKShareDialogPresenterRegistry> _shareDialogPresenterRegistry;
    SPTSharingSDKShareableServiceImpl *_shareableService;
}

+ (id)notImplementedError;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTSharingSDKShareableServiceImpl *shareableService; // @synthesize shareableService=_shareableService;
@property(retain, nonatomic) id <SPTSharingSDKShareDialogPresenterRegistry> shareDialogPresenterRegistry; // @synthesize shareDialogPresenterRegistry=_shareDialogPresenterRegistry;
@property(retain, nonatomic) id <SPTSharingSDKShareHandler> shareHandler; // @synthesize shareHandler=_shareHandler;
@property(readonly, nonatomic) id <SPTSharingSDKNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) id <SPTSharingSDKDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(readonly, nonatomic) NSArray *allShareDestinations; // @synthesize allShareDestinations=_allShareDestinations;
- (id)provideStoriesShareHandlerWithDestination:(id)arg1 entityData:(id)arg2;
- (id)provideMessageShareHandlerWithDestination:(id)arg1 entityData:(id)arg2 contextViewController:(id)arg3;
- (id)provideLinkShareHandlerWithDestination:(id)arg1 entityData:(id)arg2 contextViewController:(id)arg3;
- (id)provideImageShareHandlerWithDestination:(id)arg1 entityData:(id)arg2 contextViewController:(id)arg3;
- (id)provideTwitterShareHandlerWithEntityData:(id)arg1 contextViewController:(id)arg2;
- (id)provideDownloadShareHandlerWithEntityData:(id)arg1;
- (id)buildShareHandlerFromShareDestination:(id)arg1 shareEntityData:(id)arg2 contextViewController:(id)arg3;
- (_Bool)isShareDialogPresenterRegisteredForDestination:(id)arg1;
- (id)provideShareableService;
- (void)performShareToDestination:(id)arg1 withShareEntityData:(id)arg2 contextViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)provideShareDialogPresenterRegistry;
- (id)provideShareEntityDataFactory;
- (void)provideAvailableShareDestinationsForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <SPTSharingSDKPasteboardWrapper> pasteboardWrapper; // @synthesize pasteboardWrapper=_pasteboardWrapper;
@property(readonly, nonatomic) SPTSharingSDKLinkGenerator *linkGenerator; // @synthesize linkGenerator=_linkGenerator;
@property(readonly, nonatomic) SPTSharingSDKImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithNetworkService:(id)arg1 deeplinkHandler:(id)arg2;

@end

