//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GBTMailToParser : NSObject
{
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSString *_subject;
    NSString *_body;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSArray *bccAddresses; // @synthesize bccAddresses=_bccAddresses;
@property(readonly, nonatomic) NSArray *ccAddresses; // @synthesize ccAddresses=_ccAddresses;
@property(readonly, nonatomic) NSArray *toAddresses; // @synthesize toAddresses=_toAddresses;
- (id)encodeBody:(id)arg1;
- (id)initWithMailtoString:(id)arg1;

@end
