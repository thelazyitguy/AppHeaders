//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@class NSDictionary;

@interface TAVScribeThriftCumulativeHistogram : NSObject <NSCopying>
{
    NSDictionary *_histogram;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *histogram; // @synthesize histogram=_histogram;
- (id)marshallerDictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithHistogram:(id)arg1;

@end

