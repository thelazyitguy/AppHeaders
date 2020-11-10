//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCoding-Protocol.h>

@class NSData, NSString;

@interface PINResume : NSObject <NSCoding>
{
    NSData *_resumeData;
    NSString *_ifRange;
    long long _totalBytes;
}

+ (id)resumeData:(id)arg1 ifRange:(id)arg2 totalBytes:(long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(readonly, copy, nonatomic) NSString *ifRange; // @synthesize ifRange=_ifRange;
@property(readonly, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
- (id)initWithResumeData:(id)arg1 ifRange:(id)arg2 totalBytes:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

