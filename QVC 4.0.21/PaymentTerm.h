//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PaymentTerm : NSObject
{
    NSString *content;
    NSString *term;
    NSString *type;
    NSString *description;
    NSString *code;
    NSDate *startTime;
    NSDate *endTime;
    NSString *_termsURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *termsURL; // @synthesize termsURL=_termsURL;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *code; // @synthesize code;
@property(readonly) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *term; // @synthesize term;
@property(retain, nonatomic) NSString *content; // @synthesize content;
- (id)paymentType;
- (int)creditType;
- (id)initFromTomcatJSONDictionary:(id)arg1;
- (id)initFromJSONDictionary:(id)arg1;

@end
