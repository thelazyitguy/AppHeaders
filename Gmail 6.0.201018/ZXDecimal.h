//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZXDecimal : NSObject
{
    NSString *_value;
}

+ (id)decimalWithDecimalNumber:(id)arg1;
+ (id)decimalWithString:(id)arg1;
+ (id)decimalWithInt:(int)arg1;
+ (id)zero;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (id)decimalByAdding:(id)arg1;
- (id)decimalByMultiplyingBy:(id)arg1;
- (char *)intArrayFromString:(id)arg1;
- (id)reversedString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(id)arg1;

@end
