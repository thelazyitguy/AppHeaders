//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SocialMedia : NSObject
{
    NSString *_name;
    NSString *_url;
    NSString *_iconLowResURL;
    NSString *_iconHighResURL;
    NSString *_imageName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *iconHighResURL; // @synthesize iconHighResURL=_iconHighResURL;
@property(copy, nonatomic) NSString *iconLowResURL; // @synthesize iconLowResURL=_iconLowResURL;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end
