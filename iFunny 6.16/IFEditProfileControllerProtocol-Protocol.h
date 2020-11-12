//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFControllerProtocol-Protocol.h>

@class FNROCover, NSData, NSError, NSString, UIImage;

@protocol IFEditProfileControllerProtocol <IFControllerProtocol>
@property(readonly, nonatomic) _Bool isCoverDeleted;
@property(readonly, nonatomic) NSData *updatedCoverData;
@property(readonly, nonatomic) FNROCover *updatedCover;
@property(readonly, nonatomic) _Bool isAvatarDeleted;
@property(readonly, nonatomic) NSData *updatedAvatarData;
@property(readonly, nonatomic) NSString *birthdateText;
@property(readonly, nonatomic) NSString *sexText;
@property(readonly, nonatomic) NSString *aboutFieldText;
@property(readonly, nonatomic) NSString *nickFieldText;
- (void)loadedImage:(UIImage *)arg1;
- (void)operationError:(NSError *)arg1;
- (void)saveSuccessCompletion;
@end
