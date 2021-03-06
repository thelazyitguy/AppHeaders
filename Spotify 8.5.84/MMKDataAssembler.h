//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMKTimer, NSMutableData;
@protocol MMKLogging;

@interface MMKDataAssembler : NSObject
{
    unsigned short _expectedLength;
    NSMutableData *_data;
    MMKTimer *_timer;
    id <MMKLogging> _logger;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak id <MMKLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) MMKTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned short expectedLength; // @synthesize expectedLength=_expectedLength;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isSpecialMessage:(unsigned short)arg1 lengthNibble:(unsigned short)arg2;
- (void)resetData;
- (void)cancelTimer;
- (void)startTimerWithCallback:(CDUnknownBlockType)arg1;
- (void)clearData;
- (id)append:(id)arg1;
- (void)appendData:(id)arg1 onCompleteMessage:(CDUnknownBlockType)arg2;
- (void)initializeData:(id)arg1 error:(id *)arg2;
- (id)initWithLogger:(id)arg1;

@end

