//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVSubmission.h>

@class NSString, UIImage;

@interface BVPhotoSubmission : BVSubmission
{
    UIImage *_photo;
    NSString *_photoCaption;
    long long _photoContentType;
    unsigned long long _maxImageBytes;
}

@property unsigned long long maxImageBytes; // @synthesize maxImageBytes=_maxImageBytes;
@property long long photoContentType; // @synthesize photoContentType=_photoContentType;
@property(retain) NSString *photoCaption; // @synthesize photoCaption=_photoCaption;
@property(retain) UIImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (id)trackEvent;
- (id)createErrorResponse:(id)arg1;
- (id)createResponse:(id)arg1;
- (void)upload:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)createSubmissionParameters;
- (id)generateRequest;
- (id)endpoint;
- (id)resize:(id)arg1 withTargetSize:(struct CGSize)arg2;
- (id)nsDataForPhoto;
- (id)photoContentTypeToString;
- (id)initWithPhoto:(id)arg1 photoCaption:(id)arg2 photoContentType:(long long)arg3;

@end
