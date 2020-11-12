//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/ASWebAuthenticationPresentationContextProviding-Protocol.h>

@class ASWebAuthenticationSession, NSString, SFAuthenticationSession, UIWindow;

@interface SSOAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding>
{
    SFAuthenticationSession *_SFAuthSession;
    ASWebAuthenticationSession *_ASWebAuthSession;
    UIWindow *_presentationAnchor;
}

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (void)cancel;
- (_Bool)start;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 presentationAnchor:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
