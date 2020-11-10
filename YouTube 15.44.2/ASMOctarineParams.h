//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class GIDOptions, NSURL;
@protocol ASMNavigationDelegate, ASMSessionInternal, SSOIdentity, SSOService;

@interface ASMOctarineParams : NSObject <NSCopying>
{
    _Bool _bypassWebviewAllowlist;
    _Bool _hideContentInBackground;
    id <SSOIdentity> _identity;
    NSURL *_URL;
    id <SSOService> _SSOService;
    GIDOptions *_options;
    long long _defaultTitleType;
    id <ASMNavigationDelegate> _navigationDelegate;
    id <ASMSessionInternal> _session;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideContentInBackground; // @synthesize hideContentInBackground=_hideContentInBackground;
@property(retain, nonatomic) id <ASMSessionInternal> session; // @synthesize session=_session;
@property(nonatomic) __weak id <ASMNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) long long defaultTitleType; // @synthesize defaultTitleType=_defaultTitleType;
@property(retain, nonatomic) GIDOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(nonatomic) _Bool bypassWebviewAllowlist; // @synthesize bypassWebviewAllowlist=_bypassWebviewAllowlist;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 identity:(id)arg2 SSOService:(id)arg3;

@end

