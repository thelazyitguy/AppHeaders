//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QSSEntity.h"

@class NSArray, NSString;

@interface QSSBRContentItemPromotion : QSSEntity
{
    double _height;
    long long _slidesPerPage;
    long long _position;
    NSString *_analyticsIdentifier;
    NSArray *_slides;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *slides; // @synthesize slides=_slides;
@property(retain, nonatomic) NSString *analyticsIdentifier; // @synthesize analyticsIdentifier=_analyticsIdentifier;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long slidesPerPage; // @synthesize slidesPerPage=_slidesPerPage;
@property(nonatomic) double height; // @synthesize height=_height;
- (id)initWithDictionary:(id)arg1;

@end

