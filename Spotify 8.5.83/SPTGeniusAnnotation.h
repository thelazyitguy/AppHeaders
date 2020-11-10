//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTGeniusModel.h"

@class NSString, SPTGeniusAuthor;

@interface SPTGeniusAnnotation : SPTGeniusModel
{
    NSString *_contents;
    NSString *_contentType;
    long long _annotationType;
    SPTGeniusAuthor *_author;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) SPTGeniusAuthor *author; // @synthesize author=_author;
@property(nonatomic) long long annotationType; // @synthesize annotationType=_annotationType;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *contents; // @synthesize contents=_contents;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (long long)annotationTypeFromString:(id)arg1;

@end

