//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1CardAppStorePresenter-Protocol.h>

@class NSString, TNLRequestOperation;
@protocol T1CardAppStoreCustomizedPresentationDelegate, T1CardURLPresenter;

@interface T1CardAppStorePresenter : NSObject <T1CardAppStorePresenter>
{
    id <T1CardAppStoreCustomizedPresentationDelegate> _presentationDelegate;
    id <T1CardURLPresenter> _urlPresenter;
    TNLRequestOperation *_openAppLinkTNLRequestOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TNLRequestOperation *openAppLinkTNLRequestOperation; // @synthesize openAppLinkTNLRequestOperation=_openAppLinkTNLRequestOperation;
@property(retain, nonatomic) id <T1CardURLPresenter> urlPresenter; // @synthesize urlPresenter=_urlPresenter;
@property(nonatomic) __weak id <T1CardAppStoreCustomizedPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (_Bool)_t1_shouldShowCustomizeAppStoreViewControllerPresentation;
- (void)_t1_openAppStoreWith:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)present:(id)arg1 option:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

