//
//  MPIdentityApiRequest.h
//

#import <Foundation/Foundation.h>
#import "MParticleUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface MPIdentityApiRequest : NSObject

+ (MPIdentityApiRequest *)requestWithEmptyUser;
+ (MPIdentityApiRequest *)requestWithUser:(MParticleUser *) user;

- (void)setUserIdentity:(NSString *)identityString identityType:(MPUserIdentity)identityType;

@property (nonatomic, unsafe_unretained, readwrite) BOOL copyUserAttributes;
@property (nonatomic, strong, nullable) NSString *email;
@property (nonatomic, strong, nullable) NSString *customerId;
@property (nonatomic, strong, nullable, readonly) NSMutableDictionary *userIdentities;

@end

NS_ASSUME_NONNULL_END
