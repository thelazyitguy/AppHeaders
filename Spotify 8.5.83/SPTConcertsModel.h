//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTConcertsModel : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_dayOfTheMonth;
    NSString *_month;
    NSURL *_concertURI;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *concertURI; // @synthesize concertURI=_concertURI;
@property(readonly, nonatomic) NSString *month; // @synthesize month=_month;
@property(readonly, nonatomic) NSString *dayOfTheMonth; // @synthesize dayOfTheMonth=_dayOfTheMonth;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;

@end

