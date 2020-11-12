//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAMraidJSEngineProtocol-Protocol.h>

@class NSString, SMAMraidJSEngineBean;
@protocol SMAMraidJSEngineEventsProtocol, SMAMraidJSEngineMethodsProtocol, SMAMraidJSEnginePropertiesProtocol;

@interface SMAMraidJSEngine : NSObject <SMAMraidJSEngineProtocol>
{
    SMAMraidJSEngineBean<SMAMraidJSEngineMethodsProtocol> *_methods;
    SMAMraidJSEngineBean<SMAMraidJSEnginePropertiesProtocol> *_properties;
    SMAMraidJSEngineBean<SMAMraidJSEngineEventsProtocol> *_events;
}

@property(retain, nonatomic) SMAMraidJSEngineBean<SMAMraidJSEngineEventsProtocol> *events; // @synthesize events=_events;
@property(retain, nonatomic) SMAMraidJSEngineBean<SMAMraidJSEnginePropertiesProtocol> *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) SMAMraidJSEngineBean<SMAMraidJSEngineMethodsProtocol> *methods; // @synthesize methods=_methods;
- (void).cxx_destruct;
- (void)useJSBridge:(id)arg1;
- (id)initWithMethods:(id)arg1 properties:(id)arg2 events:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
