//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SlackLogging/ARKLogFormatter-Protocol.h>

@class NSString;

@interface ARKDefaultLogFormatter : NSObject <ARKLogFormatter>
{
    NSString *_errorLogPrefix;
    NSString *_separatorLogPrefix;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *separatorLogPrefix; // @synthesize separatorLogPrefix=_separatorLogPrefix;
@property(copy, nonatomic) NSString *errorLogPrefix; // @synthesize errorLogPrefix=_errorLogPrefix;
- (id)formattedLogMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
