//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFKeyFIDO2Request.h"

@class NSString;

@interface YKFKeyFIDO2ChangePinRequest : YKFKeyFIDO2Request
{
    NSString *_pinOld;
    NSString *_pinNew;
}

@property(retain, nonatomic) NSString *pinNew; // @synthesize pinNew=_pinNew;
@property(retain, nonatomic) NSString *pinOld; // @synthesize pinOld=_pinOld;
- (void).cxx_destruct;
- (id)initWithNewPin:(id)arg1 oldPin:(id)arg2;

@end

