//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSString;

@interface AWSIoTAssetPropertyVariant : AWSModel
{
    NSString *_booleanValueProperty;
    NSString *_doubleValueProperty;
    NSString *_integerValueProperty;
    NSString *_stringValueProperty;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *stringValueProperty; // @synthesize stringValueProperty=_stringValueProperty;
@property(retain, nonatomic) NSString *integerValueProperty; // @synthesize integerValueProperty=_integerValueProperty;
@property(retain, nonatomic) NSString *doubleValueProperty; // @synthesize doubleValueProperty=_doubleValueProperty;
@property(retain, nonatomic) NSString *booleanValueProperty; // @synthesize booleanValueProperty=_booleanValueProperty;
- (void).cxx_destruct;

@end
