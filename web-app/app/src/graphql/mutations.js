// eslint-disable
// this is an auto generated file. This will be overwritten

export const createAccount = `mutation CreateAccount($input: CreateAccountInput!) {
  createAccount(input: $input) {
    id
    name
    owner
    lastLogin
    heroes {
      items {
        id
        name
        online
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const updateAccount = `mutation UpdateAccount($input: UpdateAccountInput!) {
  updateAccount(input: $input) {
    id
    name
    owner
    lastLogin
    heroes {
      items {
        id
        name
        online
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const deleteAccount = `mutation DeleteAccount($input: DeleteAccountInput!) {
  deleteAccount(input: $input) {
    id
    name
    owner
    lastLogin
    heroes {
      items {
        id
        name
        online
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const createHero = `mutation CreateHero($input: CreateHeroInput!) {
  createHero(input: $input) {
    id
    account {
      id
      name
      owner
      lastLogin
    }
    name
    image {
      id
      bucket
    }
    online
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      rank
      description
    }
  }
}
`;
export const updateHero = `mutation UpdateHero($input: UpdateHeroInput!) {
  updateHero(input: $input) {
    id
    account {
      id
      name
      owner
      lastLogin
    }
    name
    image {
      id
      bucket
    }
    online
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      rank
      description
    }
  }
}
`;
export const deleteHero = `mutation DeleteHero($input: DeleteHeroInput!) {
  deleteHero(input: $input) {
    id
    account {
      id
      name
      owner
      lastLogin
    }
    name
    image {
      id
      bucket
    }
    online
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      rank
      description
    }
  }
}
`;
export const createImage = `mutation CreateImage($input: CreateImageInput!) {
  createImage(input: $input) {
    id
    bucket
    fullsize {
      key
      width
      height
    }
    thumbnail {
      key
      width
      height
    }
  }
}
`;
export const updateImage = `mutation UpdateImage($input: UpdateImageInput!) {
  updateImage(input: $input) {
    id
    bucket
    fullsize {
      key
      width
      height
    }
    thumbnail {
      key
      width
      height
    }
  }
}
`;
export const deleteImage = `mutation DeleteImage($input: DeleteImageInput!) {
  deleteImage(input: $input) {
    id
    bucket
    fullsize {
      key
      width
      height
    }
    thumbnail {
      key
      width
      height
    }
  }
}
`;
export const createRace = `mutation CreateRace($input: CreateRaceInput!) {
  createRace(input: $input) {
    id
    name
    description
  }
}
`;
export const updateRace = `mutation UpdateRace($input: UpdateRaceInput!) {
  updateRace(input: $input) {
    id
    name
    description
  }
}
`;
export const deleteRace = `mutation DeleteRace($input: DeleteRaceInput!) {
  deleteRace(input: $input) {
    id
    name
    description
  }
}
`;
