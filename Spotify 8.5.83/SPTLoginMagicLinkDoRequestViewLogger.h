//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger;

@interface SPTLoginMagicLinkDoRequestViewLogger : NSObject
{
    id <SPTLoginLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1;

@end

