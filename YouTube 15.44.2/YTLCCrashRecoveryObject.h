//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCoding-Protocol.h>

@class NSDate, NSString, YTLCStreamingSession;

@interface YTLCCrashRecoveryObject : NSObject <NSCoding>
{
    NSString *_appVersion;
    NSDate *_date;
    NSString *_ownerIDString;
    YTLCStreamingSession *_streamingSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTLCStreamingSession *streamingSession; // @synthesize streamingSession=_streamingSession;
@property(copy, nonatomic) NSString *ownerIDString; // @synthesize ownerIDString=_ownerIDString;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

