//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MAV4Status : NSObject
{
    NSNumber *_errcode;
    NSString *_errdetail;
    NSString *_errmsg;
}

@property(retain, nonatomic) NSString *errmsg; // @synthesize errmsg=_errmsg;
@property(retain, nonatomic) NSString *errdetail; // @synthesize errdetail=_errdetail;
@property(retain, nonatomic) NSNumber *errcode; // @synthesize errcode=_errcode;
- (void).cxx_destruct;

@end

