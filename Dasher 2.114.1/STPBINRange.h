//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STPBINRange : NSObject
{
    unsigned long long _length;
    long long _brand;
    NSString *_qRangeLow;
    NSString *_qRangeHigh;
}

+ (id)binRangesForBrand:(long long)arg1;
+ (id)mostSpecificBINRangeForNumber:(id)arg1;
+ (id)binRangesForNumber:(id)arg1;
+ (id)allRanges;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *qRangeHigh; // @synthesize qRangeHigh=_qRangeHigh;
@property(retain, nonatomic) NSString *qRangeLow; // @synthesize qRangeLow=_qRangeLow;
@property(nonatomic) long long brand; // @synthesize brand=_brand;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (long long)compare:(id)arg1;
- (_Bool)matchesNumber:(id)arg1;

@end
