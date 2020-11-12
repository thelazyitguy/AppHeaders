//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKLLogFileWriter, GCKLLoggerFilter, NSDateFormatter;
@protocol GCKLLoggerDelegate;

@interface GCKLLogger : NSObject
{
    NSDateFormatter *_dateFormatter;
    GCKLLogFileWriter *_logFileWriter;
    id <GCKLLoggerDelegate> _delegate;
    _Bool _loggingEnabled;
    _Bool _fileLoggingEnabled;
    _Bool _consoleLoggingEnabled;
    GCKLLoggerFilter *_filter;
    unsigned long long _maxLogFileSize;
    unsigned long long _maxLogFileCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxLogFileCount; // @synthesize maxLogFileCount=_maxLogFileCount;
@property(nonatomic) unsigned long long maxLogFileSize; // @synthesize maxLogFileSize=_maxLogFileSize;
@property(nonatomic) _Bool consoleLoggingEnabled; // @synthesize consoleLoggingEnabled=_consoleLoggingEnabled;
@property(nonatomic) _Bool fileLoggingEnabled; // @synthesize fileLoggingEnabled=_fileLoggingEnabled;
@property(nonatomic) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(retain, nonatomic) GCKLLoggerFilter *filter; // @synthesize filter=_filter;
- (void)logMessage:(id)arg1 level:(long long)arg2 fromFile:(const char *)arg3 line:(int)arg4 function:(id)arg5;
- (void)logAndThrowFromFunction:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 exception:(id)arg4 stack:(id)arg5 message:(id)arg6;
- (void)logFromFunction:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 level:(long long)arg4 message:(id)arg5;
- (void)stopLogFileWriter;
- (void)startLogFileWriter;
@property(readonly, nonatomic) _Bool willLog;
@property(nonatomic) long long minimumLevel;
@property(nonatomic) __weak id <GCKLLoggerDelegate> delegate;
- (id)init;

@end
