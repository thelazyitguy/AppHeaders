//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface ComAmazonPcompModel_Content : CoralModel <NSCoding, NSCopying>
{
    NSString *_contentType;
    NSString *_content;
    NSString *_scraperSource;
    NSString *_scraperType;
}

+ (id)type;
@property(copy, nonatomic) NSString *scraperType; // @synthesize scraperType=_scraperType;
@property(copy, nonatomic) NSString *scraperSource; // @synthesize scraperSource=_scraperSource;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;

@end
