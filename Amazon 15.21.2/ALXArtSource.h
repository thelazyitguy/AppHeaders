//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface ALXArtSource : JSONModel
{
    NSString<Optional> *_altText;
    unsigned long long _artSourceType;
}

+ (id)keyMapper;
@property(nonatomic) unsigned long long artSourceType; // @synthesize artSourceType=_artSourceType;
@property(retain, nonatomic) NSString<Optional> *altText; // @synthesize altText=_altText;
- (void).cxx_destruct;
- (void)setArtSourceTypeWithNSString:(id)arg1;

@end

