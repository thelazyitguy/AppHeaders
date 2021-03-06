//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PXMDataProvider-Protocol.h"

@class NSString;
@protocol PXMBoxInfoParser, PXMMenuParser, PXMServerRequestHandler;

@interface PXMDataProvider : NSObject <PXMDataProvider>
{
    NSObject<PXMMenuParser> *_menuParser;
    NSObject<PXMBoxInfoParser> *_boxInfoParser;
    NSObject<PXMServerRequestHandler> *_requestHandler;
}

@property(readonly, nonatomic) NSObject<PXMServerRequestHandler> *requestHandler; // @synthesize requestHandler=_requestHandler;
@property(readonly, nonatomic) NSObject<PXMBoxInfoParser> *boxInfoParser; // @synthesize boxInfoParser=_boxInfoParser;
@property(readonly, nonatomic) NSObject<PXMMenuParser> *menuParser; // @synthesize menuParser=_menuParser;
- (void).cxx_destruct;
- (void)requestMenuContentFromHost:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestPantryBoxInfoFromHost:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithMenuParser:(id)arg1 boxInfoParser:(id)arg2 requestHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

