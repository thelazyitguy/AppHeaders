//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class Award;

@interface AwardingTotal : NSObject <NSCopying>
{
    Award *_award;
    unsigned long long _total;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long total; // @synthesize total=_total;
@property(readonly, nonatomic) Award *award; // @synthesize award=_award;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithAward:(id)arg1 total:(unsigned long long)arg2;

@end
