//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAVastModel.h>

@class NSString, NSURL;

@interface SMAVastViewableImpression : SMAVastModel
{
    NSURL *_viewable;
    NSString *_identifier;
    NSURL *__notViewable;
    NSURL *__viewUndetermined;
}

+ (id)codingKeys;
@property(copy, nonatomic) NSURL *_viewUndetermined; // @synthesize _viewUndetermined=__viewUndetermined;
@property(copy, nonatomic) NSURL *_notViewable; // @synthesize _notViewable=__notViewable;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSURL *viewable; // @synthesize viewable=_viewable;
- (void).cxx_destruct;

@end
