//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1URLProtocolHandler-Protocol.h>

@class NSSet, NSString;

@interface T1ThirdPartyProtocolHandler : NSObject <T1URLProtocolHandler>
{
    NSSet *_schemes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *schemes; // @synthesize schemes=_schemes;
- (unsigned long long)protocolRouter:(id)arg1 handleURL:(id)arg2 context:(id)arg3;
- (_Bool)protocolRouter:(id)arg1 supportsScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

