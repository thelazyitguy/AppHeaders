//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

@interface PXMFillPercent : NSObject
{
    float _floatValue;
    NSNumberFormatter *_format;
}

@property(readonly, nonatomic) NSNumberFormatter *format; // @synthesize format=_format;
@property(readonly, nonatomic) float floatValue; // @synthesize floatValue=_floatValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *stringValue;
- (id)initWithFloat:(float)arg1 format:(id)arg2;

@end

