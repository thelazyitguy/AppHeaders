//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPNetworkImage, NSString, UIColor, UIImage;

@interface GKSAvatar : NSObject
{
    _Bool _isDefaultAvatar;
    _Bool _showDefaultImageWhileLoading;
    NSString *_personID;
    GIPNetworkImage *_profilePicture;
    UIImage *_defaultProfilePicture;
    UIColor *_backgroundColor;
    NSString *_userName;
    NSString *_email;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool showDefaultImageWhileLoading; // @synthesize showDefaultImageWhileLoading=_showDefaultImageWhileLoading;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *defaultProfilePicture; // @synthesize defaultProfilePicture=_defaultProfilePicture;
@property(nonatomic) _Bool isDefaultAvatar; // @synthesize isDefaultAvatar=_isDefaultAvatar;
@property(retain, nonatomic) GIPNetworkImage *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;

@end
