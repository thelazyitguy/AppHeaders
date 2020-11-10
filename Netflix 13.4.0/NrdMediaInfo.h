//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSURL;

@interface NrdMediaInfo : NSObject
{
    NSData *_fairplayAppCert;
    NSArray *_bifs;
    NSString *_movieId;
    NSURL *_openURL;
    NSArray *_trackCombinations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *trackCombinations; // @synthesize trackCombinations=_trackCombinations;
@property(readonly, nonatomic) NSURL *openURL; // @synthesize openURL=_openURL;
@property(readonly, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(readonly, nonatomic) NSArray *bifs; // @synthesize bifs=_bifs;
@property(readonly, nonatomic) NSData *fairplayAppCert; // @synthesize fairplayAppCert=_fairplayAppCert;
- (id)initWithMovieDetails:(id)arg1;

@end
