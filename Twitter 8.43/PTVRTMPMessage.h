//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface PTVRTMPMessage : NSObject
{
    int _csid;
    int streamID;
    int messageType;
    double time;
    NSArray *fields;
    NSData *_body;
}

+ (id)create:(int)arg1 csid:(int)arg2 stream:(int)arg3;
- (void).cxx_destruct;
@property(retain) NSData *body; // @synthesize body=_body;
@property(retain) NSArray *fields; // @synthesize fields;
@property double time; // @synthesize time;
@property int messageType; // @synthesize messageType;
@property int streamID; // @synthesize streamID;
@property(readonly) int csid; // @synthesize csid=_csid;
- (id)description;
- (id)initForCSID:(int)arg1;

@end
