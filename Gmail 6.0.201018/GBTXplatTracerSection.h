//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPTracerSection-Protocol.h"

@protocol XPTTraceSection;

@interface GBTXplatTracerSection : NSObject <GIPTracerSection>
{
    id <XPTTraceSection> _xplatTraceSection;
}

- (void).cxx_destruct;
- (void)end;
- (void)annotateKey:(id)arg1 withDouble:(_Bool)arg2;
- (void)annotateKey:(id)arg1 withBoolean:(_Bool)arg2;
- (void)annotateKey:(id)arg1 withString:(id)arg2;
- (id)initWithXPTTraceSection:(id)arg1;

@end
