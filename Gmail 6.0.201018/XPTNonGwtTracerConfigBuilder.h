//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XPTTracerConfigBuilder.h"

@class JavaIoWriter, NSString;

@interface XPTNonGwtTracerConfigBuilder : XPTTracerConfigBuilder
{
    NSString *localDirectory_;
    JavaIoWriter *writer_;
    int threadLocalBufferSize_;
    _Bool extractMultipleTraces_;
    NSString *defaultPath_;
    int pid_;
}

+ (void)initialize;
- (void)dealloc;
- (id)buildInternalWithXPTTracerConfigBuilder_BaseModule:(id)arg1;
- (_Bool)isLocalMode;
- (id)disableThreadLocalBuffers;
- (id)withTraceWriterWithComGoogleAppsXplatTracingJsonTraceWriter:(id)arg1;
- (id)withThreadLocalBufferSizeWithInt:(int)arg1;
- (id)extractMultipleTracesWithBoolean:(_Bool)arg1;
- (id)enableLocalDownloadsWithJavaIoWriter:(id)arg1;
- (id)enableLocalDownloadsWithNSString:(id)arg1;
- (id)enableLocalDownloads;

@end
