//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface NBPhoneNumberDesc : NSObject
{
    NSString *_nationalNumberPattern;
    NSString *_possibleNumberPattern;
    NSArray *_possibleLength;
    NSArray *_possibleLengthLocalOnly;
    NSString *_exampleNumber;
    NSData *_nationalNumberMatcherData;
    NSData *_possibleNumberMatcherData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *possibleNumberMatcherData; // @synthesize possibleNumberMatcherData=_possibleNumberMatcherData;
@property(readonly, nonatomic) NSData *nationalNumberMatcherData; // @synthesize nationalNumberMatcherData=_nationalNumberMatcherData;
@property(readonly, nonatomic) NSString *exampleNumber; // @synthesize exampleNumber=_exampleNumber;
@property(readonly, nonatomic) NSArray *possibleLengthLocalOnly; // @synthesize possibleLengthLocalOnly=_possibleLengthLocalOnly;
@property(readonly, nonatomic) NSArray *possibleLength; // @synthesize possibleLength=_possibleLength;
@property(readonly, nonatomic) NSString *possibleNumberPattern; // @synthesize possibleNumberPattern=_possibleNumberPattern;
@property(readonly, nonatomic) NSString *nationalNumberPattern; // @synthesize nationalNumberPattern=_nationalNumberPattern;
- (id)description;
- (id)initWithEntry:(id)arg1;

@end
